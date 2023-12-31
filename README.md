# C++

#### Constants
- const: meaning roughly ‘‘I promise not to change this value’’ (§7.5). This is used primarily to specify interfaces so that data can be passed to functions without fear of it being modif ied. The compiler enforces the promise made by const.
- constexpr: meaning roughly ‘‘to be evaluated at compile time’’ (§10.4). This is used primarily to specify constants, to allow placement of data in memory where it is unlikely to be corrupted, and for performance.

- A switch-statement tests a value against a set of constants. The case constants must be distinct, and if the value tested does not match any of them, the default is chosen. If no default is provided, no
 action is taken if the value doesn’t match any case constant.
- The while-statement executes until its condition becomes false.
