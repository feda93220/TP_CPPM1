#include <iostream>
#include <map>
#include <string>
#include <cassert>
#include <assert.h>
using namespace std;




// On peut passer à ce test n'importe quelle
// fonction qui prend en argument une Request
// et répond par une Response (points d'accès API).
struct Request {};
struct Response {int status_code;};

Request make_request(map<string, string> &payload) {
    return Request();
}

void test_response_200(
    map<string, string> &payload,
    Response (*api_hotspot)(Request &request)
) {
    Request request = make_request(payload);
    Response response = api_hotspot(request);
    assert(response.status_code == 200);
}






class Person{};


template <typename NimporteQuelTypeQuiRespecteLinterface>
class AddPrints {
    NimporteQuelTypeQuiRespecteLinterface decorated_func;
    public:
        AddPrints(NimporteQuelTypeQuiRespecteLinterface func): decorated_func(func) {}

        void operator ()() {
            printf("Avant appel class style decorator\n");
            decorated_func();
            printf("Après appel\n");
        };
};

void say_hi() {
    printf("Hi!\n");}

void qqchosedecomplique() {
    printf("QQchose de compliqué\n");
}

void logger(void (*decorated_func)()) {
    printf("decorated func going to be called\n");
    decorated_func();
    printf("decorated func ended\n");
}

int main() {
    logger(&qqchosedecomplique);

    typedef void (*Callable)(); // On défini ce qu'est un "NimporteQuelTypeQuiRespecteLinterface"
    // Dans notre cas c'est un pointeur vers une fonction qui ne prend pas d'argument et ne renvoie rien
    // void (*)() -> ptr vers une fnc qui retourne void
    // int (*)() -> ptr vers une fnc qui retourne un int 
    AddPrints<Callable> logger(say_hi);
    logger();
    return 0;
}
