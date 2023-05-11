

#ifndef _PHOTO_H
#define _PHOTO_H

class Photo {
    private: 
        int id;
        string title;
        string remarks;
        string type;
        string privacy;
     public: 
        void setID(int ID);
        int getID();
        void setTitle(string t);
        string getTitle();
        void setRemarks(string r);
        string getRemarks();
        void setType(string ty);
        string getType();
        void setPrivacy(string p);
        string getPrivacy();
    
};

#endif //_PHOTO_H
