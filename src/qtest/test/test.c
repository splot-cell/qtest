#include <stdio.h>

#include "qtest/testsuite.h"

int main() {
    qtestsuite_t * testsuite = create_qtestsuite("Test Suite");

    qunittest_t * unittest_1 = add_qunittest("Unit 1", testsuite);
    qtest_assert_true(false, "Case 1", unittest_1);
    qtest_assert_true(true, "Case 2", unittest_1);

    qunittest_t * unittest_2 = add_qunittest("Unit 2", testsuite);
    qtest_assert_true(false, "Case 1", unittest_2);
    qtest_assert_true(true, "Case 2", unittest_2);

    qunittest_t * unittest_3 = add_qunittest("Unit 3", testsuite);

    fprint_qtestsuite(stdout, testsuite);
    return qtestsuite_unittest_failures(testsuite);
}
