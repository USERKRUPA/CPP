class InvalidDataException{
    const char *msg;
    public:
        InvalidDataException(const char *msg) : msg(msg){
            //this->msg = msg;
        }
        const char* getMessage() const{
            return this->msg;
        }
};