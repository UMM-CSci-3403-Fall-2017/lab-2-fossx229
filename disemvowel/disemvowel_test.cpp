#include <gtest/gtest.h>

#include "disemvowel.h"

TEST(Disemvowel, HandleEmptyString) {
  char* line = disemvowel((char*) "");
  ASSERT_STREQ("", line);
  free(line);
}

TEST(Disemvowel, HandleNoVowels) {
  char* line = disemvowel(((char*) "pqrst"));
  ASSERT_STREQ("pqrst", line);
  free(line);
}

TEST(Disemvowel, HandleOnlyVowels) {
  char* line = disemvowel(((char*) "aeiouAEIOUOIEAuoiea"));
  ASSERT_STREQ("", line);
  free(line);
}

TEST(Disemvowel, HandleMorrisMinnesota) {
    char* line = disemvowel(((char*) "Morris, Minnesota"));
  ASSERT_STREQ("Mrrs, Mnnst", line);
  free(line);
}

TEST(Disemvowel, HandlePunctuation) {
  char* line = disemvowel(((char*) "An (Unexplained) Elephant!"));
  ASSERT_STREQ("n (nxplnd) lphnt!", line);
  free(line);
}

TEST(Disemvowel, HandleLongString) {
  char* str;
  int size;
  int i;
  char* line;
  size = 50000;
  str = (char*) calloc(size, sizeof(char));
  str[0] = 'x';
  str[1] = 'y';
  str[2] = 'z';
  for (i = 3; i < size-1; ++i) {
    str[i] = 'a';
  }
  str[size-1] = '\0';
  line=disemvowel(str);
  ASSERT_STREQ("xyz", line);

  free(str);
  free(line);
}

int main(int argc, char* argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
