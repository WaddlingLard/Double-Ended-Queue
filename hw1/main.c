#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "deq.h"

// When an item is added to the head once you should be able to get it returned
bool testHeadPut1Get1() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_head_put(q, hello);
  Data returned = deq_head_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *)returned);
}

// When an item is added to the tail once you should be able to get it returned
bool testTailPut1Get1() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_tail_put(q, hello);
  Data returned = deq_tail_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *)returned);
}

// When an item is added to the head twice you should be able to get the last one put on returned
bool testHeadPut2Get1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_head_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *)returned);
}

// When an item is added to the tail twice you should be able to get the last one put on returned
bool testTailPut2Get1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_tail_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *)returned);
}

// When an item is added to the head twice you should be able to get the first one when you get the tail
bool testHeadPut2TailGet1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_tail_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *)returned);
}

// When an item is added to the tail twice you should be able to get the first one when you get the head
bool testTailPut2HeadGet1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_head_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *)returned);
}

// When an item is added to the head thrice you should be able to get the last one put on returned
bool testHeadPut3Get1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  deq_head_put(q, smile);
  Data returned = deq_head_get(q);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(smile, (char *)returned);
}

// When an item is added to the tail thrice you should be able to get the last one put on returned
bool testTailPut3Get1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  deq_tail_put(q, smile);
  Data returned = deq_tail_get(q);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(smile, (char *)returned);
}

// When an item is added to the head twice you should be able to get both elements in a stack order
bool testHeadPut2Get2() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned1 = deq_head_get(q);
  Data returned2 = deq_head_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *)returned1) || strcmp(hello, (char *) returned2);
}

// When an item is added to the tail twice you should be able to get both elements in a stack order
bool testTailPut2Get2() {
  
  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  
  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned1 = deq_tail_get(q);
  Data returned2 = deq_tail_get(q);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *)returned1) || strcmp(hello, (char *) returned2);
}

// Calling ith with 0 as the index should return the element at the head
bool testHeadPut1ith0() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_head_put(q, hello);
  Data returned = deq_head_ith(q, 0);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(hello, (char *)returned);
}

// Calling ith with 0 as the index should return the element at the tail
bool testTailPut1ith0() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_tail_put(q, hello);
  Data returned = deq_tail_ith(q, 0);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(hello, (char *)returned);
}

// Calling ith with 1 as the index should return the element after head
bool testHeadPut2ith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_head_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(hello, (char *)returned);
}

// Calling ith with 1 as the index should return the element before tail
bool testTailPut2ith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_tail_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(hello, (char *)returned);
}

// Calling ith with 0 as the index should return the element at the head
bool testHeadPut2ith0() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_head_ith(q, 0);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(friend, (char *)returned);
}

// Calling ith with 0 as the index should return the element at the tail
bool testTailPut2ith0() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_tail_ith(q, 0);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(friend, (char *)returned);
}

// Calling ith with 1 as the index should return the middle element
bool testHeadPut3ith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  deq_head_put(q, smile);
  Data returned = deq_head_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(friend, (char *)returned);
}

// Calling ith with 1 as the index should return the middle element
bool testTailPut3ith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  deq_tail_put(q, smile);
  Data returned = deq_tail_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0 
  return strcmp(friend, (char *)returned);
}

// Calling rem after a put should return the same data inserted at the head
bool testHeadPut1Rem1stElement() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_head_put(q, hello);
  Data returned = deq_head_rem(q, hello);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}

// Calling rem after a put should return the same data inserted at the tail
bool testTailPut1Rem1stElement() {

  Deq q = deq_new();
  char * hello = "hello";

  deq_tail_put(q, hello);
  Data returned = deq_tail_rem(q, hello);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}

// Calling rem on the 2nd element added should have it returned
bool testHeadPut2Rem2ndElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_head_rem(q, friend);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *) returned);
}

// Calling rem on the 2nd element added should have it returned
bool testTailPut2Rem2ndElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_tail_rem(q, friend);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *) returned);
}


// Calling rem on the 1st element added should have it returned
bool testHeadPut2Rem1stElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  Data returned = deq_head_rem(q, hello);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}

// Calling rem on the 1st element added should have it returned
bool testTailPut2Rem1stElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  Data returned = deq_head_rem(q, hello);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}

// Calling rem on the 2nd element added should have it returned
bool testHeadPut3Rem2ndElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  deq_head_put(q, smile);
  Data returned = deq_head_rem(q, friend);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *) returned);
}

// Calling rem on the 2nd element added should have it returned
bool testTailPut3Rem2ndElement() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  deq_tail_put(q, smile);
  Data returned = deq_head_rem(q, friend);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(friend, (char *) returned);
}

// Calling rem on the 2nd element and then ith should be able to retrieve the 3rd element (effectively) from the start
bool testHeadPut3Rem2ndElementith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_head_put(q, hello);
  deq_head_put(q, friend);
  deq_head_put(q, smile);
  deq_tail_rem(q, friend);
  Data returned = deq_head_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}


// Calling rem on the 2nd element and then ith should be able to retrieve the 3rd element (effectively) from the start
bool testTailPut3Rem2ndElementith1() {

  Deq q = deq_new();
  char * hello = "hello";
  char * friend = "friend";
  char * smile = ":)";

  deq_tail_put(q, hello);
  deq_tail_put(q, friend);
  deq_tail_put(q, smile);
  deq_head_rem(q, friend);
  Data returned = deq_tail_ith(q, 1);
  deq_del(q,0);

  // Should be returning 0
  return strcmp(hello, (char *) returned);
}

// Fail Methods

// Should fail as the deq is empty
bool testGet1() {
  
  Deq q = deq_new();
  deq_head_get(q);

  deq_del(q,0);
  return -1;
}

// Should fail as the deq is empty
bool testith0() {

  Deq q = deq_new();
  deq_head_ith(q, 0);

  deq_del(q,0);
  return -1;
}

// Should fail as the deq is empty
bool testRemUnknown() {

  Deq q = deq_new();
  char * random = "feipfaj";

  deq_head_rem(q, random);
  deq_del(q,0);

  return -1;
}

// Should fail as there is no element matching the thing being searched
bool testRemNotInDeq() {

  Deq q = deq_new();
  char * hello = "hello";
  char * random = "pbeoaij";
  
  deq_head_rem(q, random);
  deq_del(q,0);

  return -1;
}

int main() {

  // Running tests for put and get
  bool result1 = testHeadPut1Get1();
  bool result2 = testTailPut1Get1();
  bool result3 = testHeadPut2Get1();
  bool result4 = testTailPut2Get1();
  bool result5 = testHeadPut2TailGet1();
  bool result6 = testTailPut2HeadGet1();
  bool result7 = testHeadPut3Get1();
  bool result8 = testTailPut3Get1();
  bool result9 = testHeadPut2Get2();
  bool result10 = testTailPut2Get2();

  // Error tests for put and get (Expected Behavior)
  // There is not any error handling, so it will just crash it you just run it
  // bool fail1 = testGet1();

  // Should all be 0 (strcmp returns 0 on equal strings)
  printf("Testing put and get test methods\n");
  printf("Outputting string comparisons (should be 0)\n");
  printf("%d %d %d %d %d %d %d %d %d %d\n", result1, result2, result3, result4, result5, result6, result7, result8, result9, result10);
  printf("-------------------------\n\n");

  // Running tests for ith
  bool ith1 = testHeadPut1ith0();
  bool ith2 = testTailPut1ith0();
  bool ith3 = testHeadPut2ith1();
  bool ith4 = testTailPut2ith1();
  bool ith5 = testHeadPut2ith0();
  bool ith6 = testTailPut2ith0();
  bool ith7 = testHeadPut3ith1();
  bool ith8 = testTailPut3ith1();

  // Error tests for ith (Expected Behavior)
  // There is not any error handling, so it will just crash it you just run it
  // bool fail2 = testIth1();

  printf("Testing ith test methods\n");
  printf("Outputting string comparisons (should be 0)\n");
  printf("%d %d %d %d %d %d %d %d\n", ith1, ith2, ith3, ith4, ith5, ith6, ith7, ith8);
  printf("-------------------------\n\n");

  // Running test for rem
  bool rem1 = testHeadPut1Rem1stElement();
  bool rem2 = testTailPut1Rem1stElement();
  bool rem3 = testHeadPut2Rem2ndElement();
  bool rem4 = testTailPut2Rem2ndElement();
  bool rem5 = testHeadPut2Rem1stElement();
  bool rem6 = testTailPut2Rem1stElement();
  bool rem7 = testHeadPut3Rem2ndElement();
  bool rem8 = testTailPut3Rem2ndElement();
  bool rem9 = testHeadPut3Rem2ndElementith1();
  bool rem10 = testTailPut3Rem2ndElementith1();

  // Error tests for ith (Expected Behavior)
  // There is not any error handling, so it will just crash it you just run it
  // bool fail3 = testRemUnknown();
  // bool fail4 = testRemNotInDeq();

  printf("Testing rem test methods\n");
  printf("Outputting string comparisons (should be 0)\n");
  printf("%d %d %d %d %d %d %d %d %d %d \n", rem1, rem2, rem3, rem4, rem5, rem6, rem7, rem8, rem9, rem10);
  printf("-------------------------\n\n");

  return 0;
}