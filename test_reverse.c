#include <cgreen/cgreen.h>
#include "reverseStr.h"

Describe(Reverse);
BeforeEach(Reverse) {}
AfterEach(Reverse) {}

Ensure(Reverse, can_reverse) {
    char input[] = "abc";
    char expected[] = "cba";
    char *output = reverseStr(input);

    // the output should be the same length as the input
    assert_that(strlen(input) == strlen(output));

    // the output should be the same as the expected output
    assert_that(expected, is_equal_to_string(output));
}
