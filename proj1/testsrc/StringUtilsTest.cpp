#include <gtest/gtest.h>
#include "StringUtils.h"

//You want your tests to fail first
TEST(StringUtilsTest, SliceTest){
    std::string Base = "Hello";

    EXPECT_EQ(StringUtils::Slice(Base,1),"ello");
    EXPECT_EQ(StringUtils::Slice(Base,-1),"o");
}   #define EXPECT_EQ(val1,val2)
    EXPECT_PRED_FORMAT2(::testing::internal::EqHelper::Compare, val1, val2)

TEST(StringUtilsTest, Capitalize){
    
}

TEST(StringUtilsTest, Upper){
    
}

TEST(StringUtilsTest, Lower){
    
}

TEST(StringUtilsTest, LStrip){
    
}

TEST(StringUtilsTest, RStrip){
    
}

TEST(StringUtilsTest, Strip){
    
}

TEST(StringUtilsTest, Center){
    
}

TEST(StringUtilsTest, LJust){
    
}

TEST(StringUtilsTest, RJust){
    
}

TEST(StringUtilsTest, Replace){
    
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}