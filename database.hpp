#ifndef __DATABASE_HPP__
    #define __DATABASE_HPP__

    #include <iostream>
    #include <string>

    using namespace std;

    class Database
    {
        public:
            //Constructor
            Database() = default;
            Database(string p);
            //Getter
            string getPath();
            //Setter
            void setPath(string p);
            //Publics Features
            bool isExist();

        private:
            //Attributes
            string path;
            //Privates features
            string CheckExtension(string file, string extension);
    };

#endif