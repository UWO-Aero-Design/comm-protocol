// Units under test
#include "test_Message.cpp"
#include "test_Utility.cpp"

// Main that runs all unit tests
int main( int argc, char **argv )
{
    testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
