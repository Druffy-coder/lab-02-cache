// Copyright 2021 Dmitriy Semenihin <SemenihinDmit@yandex.ru>

#include <stdexcept>

#include <gtest/gtest.h>

#include <example.hpp>

TEST(Example, EmptyTest) {
    EXPECT_THROW(example(), std::runtime_error);
}
