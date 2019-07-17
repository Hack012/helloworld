#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {//class 전체
    public:
    using contract::contract;

    ACTION hi(name user) { //'hi'라는 action을 지정해줌
      require_auth(user);
      print("hello, ", user);
    }

    ACTION getaccount(name user) {//존재하는 계정인가 안하는 계정인가
      require_auth( get_self() );
      print( is_account(user) );
    }

    private:


};