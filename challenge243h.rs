//lets try this using rust
//[2015-12-04] Challenge #243 [Hard] New York Street Sweeper Paths
//https://github.com/nrc/r4cppp/blob/master/graphs/README.md
use std::rc::Rc;
use std::cell::RefCell;
use std::collections::HashSet;

use io::string;

struct Node {
    datum: &'static str,
    edges: Vec<Rc<RefCell<Node>>>,
} //node structure

fn main(){
  
}
