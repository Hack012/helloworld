#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {//class 전체
    public:
    using contract::contract;

    ACTION hi(name user) { //'hi'라는 action을 지정해줌
       check(has_auth(user), "hey yo follow me!!!!");//check함수 특징: 내가 에러메세지와 접근명을 설정할 수 있다.
       //has_auth:참 거짓을 판명해줌, 거짓 일 경우 뒤에 설정한 에러메세지가 나온다.
       // require_auth(user); //권한을 지정해줄 수 있다: action을 실행하는 주체가 'user'가 아니면 실행을 못한다.

        print("hello, ", user);
    }

    private:


};