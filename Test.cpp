/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2021-02
 */
#include "doctest.h"
#include "mat.hpp"
#include "strVar.hpp"	
#include <iostream>
#include <stdexcept>
#include <string>
#include <algorithm>
using namespace ariel;
// using namespace std;






/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
// std::string nospaces(std::string input){
// 	std::erase(input, ' ');
// 	std::erase(input, '\t');
// 	std::erase(input, '\n');
// 	std::erase(input, '\r');
// 	return input;
// }


TEST_CASE("Good input"){
	CHECK(nospaces(mat(99,49, '@', '-')) == nospaces(str1));
	CHECK(nospaces(mat(21,19, '|', '-')) == nospaces(str2));
	CHECK(nospaces(mat(21,19, '!', '=')) == nospaces(str3));
	CHECK(nospaces(mat(41,29, '!', '=')) == nospaces(str4));
	CHECK(nospaces(mat(37,19, 'o', 'b')) == nospaces(str5));
	CHECK(nospaces(mat(61,29, '|', '-')) == nospaces(str6));
	CHECK(nospaces(mat(61,29, ':', '|')) == nospaces(str7));
	CHECK(nospaces(mat(21,9, 'h', 'i')) == nospaces(str8));
	CHECK(nospaces(mat(21,9, '-', '>')) == nospaces(str9));
	CHECK(nospaces(mat(21,9, '<', '>')) == nospaces(str10));
}

TEST_CASE("even numbers"){
    CHECK_THROWS(mat(10, 5, '$', '%'));
	CHECK_THROWS(mat(11, 6, '$', '%'));
	CHECK_THROWS(mat(10, 8, '$', '%'));
	CHECK_THROWS(mat(10, 5, '$', '/'));
	CHECK_THROWS(mat(150, 5, '$', '>'));
	
}
TEST_CASE("Not more than 0!"){
    CHECK_THROWS(mat(9, -5, '7', '%'));
	CHECK_THROWS(mat(-9, 5, '$', 'w'));
	CHECK_THROWS(mat(-9, -5, '$', 'w'));
	CHECK_THROWS(mat(-9, 0, '$', 'w'));
	CHECK_THROWS(mat(0, 0, '$', 'w'));
}
// /* Add more test cases here */
