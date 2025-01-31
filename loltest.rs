#![no_std]

// struct and enum must have repr(C) AND have a definition in both the C header
// and the rust file
#[repr(C)]
pub enum NumNum {
    EULL,
    LUL,
    ONE,
}

#[repr(C)]
pub struct ObjectTest {
    x: usize,
    y: usize,
}
impl ObjectTest {
    #[no_mangle]
    pub extern "C" fn objtest_get_x(&self) -> &usize {
        &self.x
    }
    #[no_mangle]
    pub extern "C" fn objtest_get_y(&self) -> &usize {
        &self.y
    }
}

#[no_mangle]
pub extern "C" fn zero() -> usize {
    0
}

