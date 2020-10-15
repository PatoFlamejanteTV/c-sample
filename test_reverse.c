#include <cgreen/cgreen.h>

Describe(Reverse);
BeforeEach(Reverse) {}
AfterEach(Reverse) {}

Ensure(Reverse, can_reverse) {
    assert_that(1 == 1);
}

int main(int argc, char **argv) {
    TestSuite *suite = create_test_suite();
    add_test_with_context(suite, Reverse, can_reverse);
    return run_test_suite(suite, create_text_reporter());
}
