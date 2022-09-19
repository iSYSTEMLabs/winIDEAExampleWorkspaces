#![no_main]
#![no_std]

#![allow(unused_variables)]

use panic_halt as _;

use cortex_m_rt::entry;
use cortex_m_semihosting::{debug, hprintln};

const CONST_MACRO: u8 = 0xF;
static GLOBAL_VAR: u32 = 0x123456;
static mut MUTABLE_GLOBAL_VAR: u8 = 0xF;
type U32Alias = u32;

struct StrC
{
  pub m_u32:  u32,
  pub m_u64:  u64,
  pub m_i8:   i8,
  pub m_i16:  i16,
  pub m_f32:  f32
}

struct StrTuple
(
  pub u32,
  pub bool
);

enum Vehicle
{
  Car(f32, f32),
  Bus(f32, f32)
}

union UniC
{
  pub m_i32: i32,
  pub m_u8: u8
}

#[entry]
unsafe fn main() -> ! {
    hprintln!("Hello, world!").unwrap();
    
    hprintln!("Hello, world! {}", CONST_MACRO).unwrap();
    hprintln!("Hello, world! {}", MUTABLE_GLOBAL_VAR).unwrap();
    type_simple();
    type_struct();
    type_arrays();

    let _result = multi(100, 200);

    test_conditions();
    test_loops();
    test_raw_poiters();

    // exit QEMU
    // NOTE do not run this on hardware; it can corrupt OpenOCD state
    debug::exit(debug::EXIT_SUCCESS);
    

    loop {}
}

fn multi(x: u32, y: u32) -> u32
{
  return x*y;
}

//testing primitive types
fn type_simple()
{
  let mut i8_val: i8 = -1;
  let mut u8_val: u8 = 0;
  let mut i16_val: i16 = -1;
  let mut u16_val: u16 = 0;
  let mut i32_val: i32 = -1;
  let mut u32_val: U32Alias = GLOBAL_VAR;
  let mut i64_val: i64 = -1;
  let mut u64_val: u64 = 0;
  let mut i128_val: i128 = -1;
  let mut u128_val: u128 = 0;
  let mut isize_val: isize = -1;
  let mut usize_val: usize = 0;
  let mut f32_val: f32 = 1.0;
  let mut f64_val: f64 = 2.0;
  let mut bool_val: bool = false;
  let _c_val = 'A';

  let mut u8_count: u8 = CONST_MACRO;
  while u8_count < 5
  {
    i8_val = i8_val + u8_count as i8;
    u8_val = u8_val + u8_count;
    i16_val = i16_val + u8_count as i16;
    u16_val = u16_val + u8_count as u16;
    i32_val = i32_val + u8_count as i32;
    u32_val = u32_val + u8_count as u32;
    i64_val = i64_val + u8_count as i64;
    u64_val = u64_val + u8_count as u64;
    i128_val = i128_val + u8_count as i128;
    u128_val = u128_val + u8_count as u128;
    isize_val = isize_val + u8_count as isize;
    usize_val = usize_val + u8_count as usize;
    f32_val = f32_val + u8_count as f32;
    f64_val = f64_val + u8_count as f64;
    if bool_val == true
    {
      bool_val = false;
    }
    else
    {
      bool_val = true;
    }

    u8_count += 1;
  }
}

fn type_struct()
{
  //struct
  let mut sc = StrC {
    m_u32: 0x12345678,
    m_u64: 0x87654321,
    m_i8:  0x12,
    m_i16: 0xFF,
    m_f32: 1.2345678
  };

  sc.m_u64 = 0x0;
  sc.m_f32 = 8.7;
  let _sc_m_u32 = sc.m_u32;
  let _sc_m_i8 = sc.m_i8;
  let _sc_m_i16 = sc.m_i16;

  //tuple
  let st = StrTuple(0x12345678, true);
  let _st_m_u32 = st.0;
  let _st_m_bool = st.1;

  //enum
  let mut _veh: Vehicle = Vehicle::Car(4.0, 1000.5);
  _veh = Vehicle::Bus(10.0, 5000.0);

  //union
  let mut uni = UniC{m_i32: 0x123456};
  uni.m_u8 = 0xF;
}

fn type_arrays()
{
  let array = ["zero", "one", "two", "three"];
  let _first = array[0];
  let slice = &array[1..2];

  const P: usize = 2;
  const N: usize = 3;
  let x1 = [[0xFu8; P]; N];

  for (i, row) in x1.iter().enumerate()
  {
    for (j, col) in row.iter().enumerate()
    {
    }
  }
}

fn test_conditions()
{
  let mut x = 0;
  while x < 10
  {
    x += 1;
  }

  let y = 10;
  let do_compare = true;

  if do_compare && x == y
  {
    x = 100;
  }
  else
  {
    x = 0;
  }

  let _lx = x;

  match _lx
  {
    0 => 0x0,
    _ => 0xFF,
  };
}

fn test_loops()
{
  let mut counter = 0;
  while counter < 100
  {
    counter += 1;
  }

  counter = 0;
  loop
  {
    counter += 1;

    if counter == 3
    {
      continue;
    }

    if counter == 5
    {
      break;
    }
  }

  let mut x = 0;
  for counter in 0..100
  {
    if counter % 15 == 0
    {
      x += 1;
    }
    else if counter % 3 == 0
    {
      x = 200;
    }
    else if counter % 5 == 0
    {
      x = 300;
    }
    else
    {
      x = 400;
    }
  }
}

fn test_raw_poiters()
{
  let x = 5;
  let raw = &x as *const i32;
  let points_at_raw = unsafe { *raw };

  let mut y = 10;
  let raw_mut = &mut y as *mut i32;
  let points_at_raw_mut = unsafe { *raw_mut };
}