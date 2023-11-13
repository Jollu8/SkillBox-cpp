// foo.h


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN


#include "test/doctest.h"
#include "SkillBox.h"
#include <chrono>
#include <algorithm>

#define module_12_3

#ifdef module_12_3
TEST_CASE("module_12_3") {
//   auto res = travelTime(100, 2);
    SUBCASE("Test: by zero") {
        float res;
        try {
            res = travelTime(100.0, 0);
        }catch (std::exception & e) {
            CHECK_THROWS(res);
        }
    }
}
#endif


#ifdef module_12_2

TEST_CASE("module_12_2") {
    std::vector<double> vec{
            1.2, 2.3, 1.11, 3.4, 5.5, 5.4, 5.3, 5.1, 1.5, 1.25, 5.41, 5.31, 5.11, 1.51, 1.251
    };
    runProgram(vec);
    if(!std::is_sorted(vec.begin(), vec.end())) {
        std::cout << "Возможно ваша функция неправильно сортирует или неправильно возвращает\n"
        << "ваша функция должна назваться void runProgram(std::vector<double> &input)\n";
    }
    CHECK(std::is_sorted(vec.begin(), vec.end()));
    std::vector<double> v;
    runProgram(v);
    CHECK(v.empty());
}

#endif

#ifdef module_12_1

TEST_CASE("module_12_1") {
    std::istringstream input(
            "SidorovA IvanovA PetrovA SidorovB IvanovB PetrovB SidorovC IvanovC PetrovC SidorovD 10 1 5");
    std::string output = runProgram(input);
    if (output != "SidorovD\nSidorovA\nIvanovB\n") {
        std::cout << "Возможно ваша функция неправильно работает\n"
                  << "ваша функция вот так должна быть:\n"
                  << R"(std::string runProgram(std::istringstream &input) {
                            std::ostringstream output;
                            std::string tenants[10];"
                     // Здесь должен быть ваш код, который читает из input и пишет в outpu
                             return output.str();
                 })";
    }
    SUBCASE("Test: equals") {
        CHECK_EQ(output, "SidorovD\nSidorovA\nIvanovB\n");
    }

}

#endif


#ifdef module_11_4

TEST_CASE("module_11_4") {
    SUBCASE("Test: Valid games") {
        if(checkTicTacToe({"X..", ".X.", "..X"}) !=  "Petya won") {
            std::cout << "Вы возможно неправильно вводите данные\n"
            << "попробуйте вот так:\n";
             std::cout << R"(int main() {
                std::vector<std::string> board(3);
                for (int i = 0; i < 3; ++i) {
                    std::cin >> board[i];
                }
                std::cout << checkTicTacToe(board) << std::endl;
                return 0;
            })";
        }
        CHECK_EQ(checkTicTacToe({"X..", ".X.", "..X"}),  "Petya won");
        CHECK_EQ(checkTicTacToe({"OOO", "...", "..."}),"Vanya won");
        CHECK_EQ(checkTicTacToe({"XOX", "OXO", "XOX"}), "Nobody");

    }
    SUBCASE("Test: Invalid games") {
            EXPECT_EQ(checkTicTacToe({"X..", "OXO", "OOO"}), "Incorrect");
            EXPECT_EQ(checkTicTacToe({"XO.", "XO.", "X.O"}), "Incorrect");
            EXPECT_EQ(checkTicTacToe({"OX.", "XOX", "X.O"}), "Incorrect");

    }

}
#endif


#ifdef module_11_3

TEST_CASE("module_11_3") {

    SUBCASE("Test: Valid Ip address") {
        CHECK(isValidIP("127.0.0.1"));
        CHECK(isValidIP("255.255.255.255"));
        CHECK(isValidIP("1.2.3.4"));
        CHECK(isValidIP("55.77.213.101"));

    }
    SUBCASE("Test: Invalid Ip address") {
        CHECK_FALSE(isValidIP("255.256.257.258"));
        CHECK_FALSE(isValidIP("0.55.33.22."));
        CHECK_FALSE(isValidIP("10.00.0000.0"));
        CHECK_FALSE(isValidIP("23.055.2550.033"));
        CHECK_FALSE(isValidIP("65.123..9"));
        CHECK_FALSE(isValidIP("a.b.c.d"));

    }
}

#endif

#ifdef module_11_2

TEST_CASE("module_11_2") {
    std::string test_v_1 = "example@example.com";
    std::string test_v_2 = "example.example@example.com";
    std::string test_v_3 = "example_example@example.com";
    std::string test_v_4 = "example@example.example.com";

    std::string test_iv_1 = "example";
    std::string test_iv_2 = "example@";
    std::string test_iv_3 = "example@example";
    std::string test_iv_4 = "example@example.";
    std::string test_iv_5 = "example@.com";
    SUBCASE("Test: ValidEmails") {
        CHECK(isValidEmail(test_v_1));
        CHECK(isValidEmail(test_v_2));
        CHECK(isValidEmail(test_v_3));
        CHECK(isValidEmail(test_v_4));
    }
    SUBCASE("Test: InvalidEmails") {
        CHECK_FALSE(isValidEmail(test_iv_1));
        CHECK_FALSE(isValidEmail(test_iv_2));
        CHECK_FALSE(isValidEmail(test_iv_3));
        CHECK_FALSE(isValidEmail(test_iv_4));
        CHECK_FALSE(isValidEmail(test_iv_5));
    }
}

#endif


#ifdef module_11_1
TEST_CASE("Module_11_1") {
    std::string empty;
    std::string hello = "Hello";
   std::string test1_org = "The quick brown fox jumps over the lazy dog";
   std::string test1_encrypt = "Ymj vznhp gwtbs ktc ozrux tajw ymj qfed itl";

    SUBCASE("Test: encrypt") {
        CHECK(encryptCaesar(empty,5) == "");
        CHECK(encryptCaesar(hello, 2) == "Jgnnq");
        CHECK(encryptCaesar(test1_org, 5) == test1_encrypt);
    }
    SUBCASE("Test: decrypt") {
        CHECK(decryptCaesar(empty, 2) == "");
        CHECK(decryptCaesar(test1_encrypt, 5) == test1_org);
    }

}
#endif
