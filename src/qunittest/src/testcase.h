#ifndef QUNITEST_TESTCASE_H
#define QUNITEST_TESTCASE_H

#include "qunittest/testsuite.h"

struct qtestcase_s {
    char * label;
    qtestresult_t result;
    qtestcase_t * next;
};

#endif