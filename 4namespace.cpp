#include <iostream>

    /* Namespace = provides a solution for preventing name conflicts
                   in large projects. Each entity needs a unique name.
                   A namespace allows for identically named entities
                   as long as the namespaces are different. */

namespace river{
    int water = 9;
}

namespace rain{
    int water = 8;
}

namespace ocean{
    int water = 1;
}

int main() {

    using namespace ocean;    // by this statement, a default namespace can be used which doesnt have to use the prefix for its namespace.

    //int water = 5;  // to use this local variable water without prefix, no namespace should be used.
    
    std::cout << "default " << water << std::endl;   
    std::cout << "river " << river::water << std::endl;     // to use these specific water variables,
    std::cout << "rain " << rain::water << std::endl;       // namespace is used to specify the variable.
    std::cout << "ocean " << ocean::water << std::endl;

    return 0;
}

/* Note: std is also a namespace, by "using namespace std", there doesnt have to be the std prefix.
    But there so many entities in the namespace of std so using that namespace could redundacne the data.
    for a safer solution, we can used specified namespace. for ex:

                using std::cout;
                using std::string;

    This could help from the repeatition of namespace. */ 