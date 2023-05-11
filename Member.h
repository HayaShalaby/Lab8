

#ifndef _MEMBER_H
#define _MEMBER_H

class Member {
    private: 
        int id;
        string name;
        string address;
        string contact;
     public: 
        void setID(int ID);
        int getID();
        void setAddress(string a);
        string getAddress();
        void setContact(string c);
        string getContact();
};

#endif //_MEMBER_H
