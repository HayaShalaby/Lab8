
#ifndef _ALBUM_H
#define _ALBUM_H

class Album {
     private: 
        int id;
        string title;
        string remarks;
    public:
        void setID(int ID);
        int getID();
        void setTitle(string t);
        string getTitle();
        void setRemarks(string r);
        string getRemarks();
        Album createAlbum();
};

#endif //_ALBUM_H
