#[no_mangle]
pub extern "C" fn add_u64(left: u64, right: u64) -> u64 {
    left + right
}

#[no_mangle]
pub extern "C" fn sub_u64(left: u64, right: u64) -> u64 {
    left - right
}

#[no_mangle]
pub extern "C" fn hello() {
    println!("Hello from Rust!");
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn it_works() {
        assert_eq!(add_u64(2, 2), 4);
        assert_eq!(sub_u64(2, 2), 0);
    }
}
