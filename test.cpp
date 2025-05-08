#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Lab2.h"


TEST_CASE("Testing load function") {
    vector<string> testvec;
    load(testvec, "my_file.txt");
    CHECK(testvec[0] == "Smith");
    CHECK(testvec[30] == "Walker");
}
TEST_CASE("Testing sort of vector<string>") {
    vector<string> arr{"banana", "apple", "cherry"};
    sort_vec(arr);
    CHECK(arr[0] == "apple");
    CHECK(arr[1] == "banana");
    CHECK(arr[2] == "cherry");
}