#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Q7_Student, HandlesNumbers) {
  CPPLib object1;
  std::string from="af2";
  std::string to="ksa";
  
  std::map<char,char> vect1{{'2','a'},{'a','k'},{'f','s'}};
  std::map<char, char> cmp = object1.Mappable(from,to);
  
  std::string key{};
  std::string value{};
  for (auto iter : cmp)
  {
    key= key+iter.first ;
    value= value+iter.second;
  }

  std::string key1{};
  std::string value1{};
  for (auto iter : vect1)
  {
    key1= key1+iter.first ;
    value1= value1+iter.second;
  }

  ASSERT_EQ(key.length(), key1.length()) << "Vectors x and y are of unequal length";
  ASSERT_EQ(value.length(), value1.length()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < key.size(); ++i){
    EXPECT_EQ(key,key1);
    EXPECT_EQ(value,value1);
  } 
}

TEST(Q7_Student, HandlesCorrectData) {
  CPPLib object1;
  std::string from="askasd";
  std::string to="ksaksf";
  
  std::map<char,char> vect1{{'a','k'},{'d','f'},{'k','a'},{'s','s'}};
  std::map<char, char> cmp = object1.Mappable(from,to);
  
  std::string key{};
  std::string value{};
  for (auto iter : cmp)
  {
    key= key+iter.first ;
    value= value+iter.second;
  }

  std::string key1{};
  std::string value1{};
  for (auto iter : vect1)
  {
    key1= key1+iter.first ;
    value1= value1+iter.second;
  }

  ASSERT_EQ(key.length(), key1.length()) << "Vectors x and y are of unequal length";
  ASSERT_EQ(value.length(), value1.length()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < key.size(); ++i){
    EXPECT_EQ(key,key1);
    EXPECT_EQ(value,value1);
  } 
}

//Negative Tests
TEST(Q7_Student, HandlesEmptyVector) {
  CPPLib object1;
  std::string from="";
  std::string to="";
  
  std::map<char, char> cmp = object1.Mappable(from,to);
  EXPECT_EQ(cmp.empty(),true);
}

TEST(Q7_Student, HandlesVectorWithExceptionMultipleMapping) {
  CPPLib object1;
  std::string from="afa";
  std::string to="ksa";
  
  std::map<char, char> cmp = object1.Mappable(from,to);
  EXPECT_EQ(cmp.empty(),true);
}

TEST(Q7_Student, HandlesVectorWithExceptionDifferentSize) {
  CPPLib object1;
  std::string from="af";
  std::string to="ksa";
  
  std::map<char, char> cmp = object1.Mappable(from,to);
  EXPECT_EQ(cmp.empty(),true);
}
