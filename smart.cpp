#include <memory>
#include <utility>

#include "smart.h"

using namespace std;

unique_ptr<DeleteMe> unique() {
    auto uniquep = make_unique<DeleteMe>();
    return move(uniquep);
}

DeleteMe* raw() {
    DeleteMe *ptr = new DeleteMe;
    return ptr;
}

shared_ptr<DeleteMe> shared() {
    auto sharedp = make_shared<DeleteMe>();
    return sharedp; 
}

weak_ptr<DeleteMe> weak() {
    auto sharedp = make_shared<DeleteMe>();
    weak_ptr<DeleteMe> weakp = sharedp;
    return weakp;
}


int main() {
    shared_ptr<DeleteMe> s_ptr;
    unique_ptr<DeleteMe> u_ptr;
    weak_ptr<DeleteMe>   w_ptr;
    DeleteMe            *r_ptr;

    cout << "Local Scope" << endl;
    {
        cout << "Create Object" << endl;
        auto u_ptr = shared();
        cout << "Finished" << endl;
    }
    cout << "Outside Scope" << endl;

    return 0;
}
