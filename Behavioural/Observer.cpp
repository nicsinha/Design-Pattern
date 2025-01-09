#include <bits/stdc++.h>
using namespace std;
class IUser {

    public:
    virtual void notify(string msg) = 0;
};

class User : public IUser {

   string name;
   public:
   User(string s) {
       name = s;
   }
   void notify(string mes) {
       cout<<"User "<<name<<" recieved from Publisher is "<<mes<<endl;
   }

};
class Group {

    vector<IUser*> users;
    public:

    void subscribe(IUser* user) {
        users.push_back(user);
    }
    void notify(string mes) {
        for(auto u:users) {
            u->notify(mes);
        }
    }
};

int main() {
    
    User* user1 = new User("Nikhil");
    User* user2 = new User("Prince");
    User* user3 = new User("Ankit");

    Group* group = new Group();
    
    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("Hello Folks");
}
