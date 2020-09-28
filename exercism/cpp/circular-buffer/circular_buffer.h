#if !defined(CIRCULAR_BUFFER_H)
#define CIRCULAR_BUFFER_H

namespace circular_buffer{

class circulat_buffer{
   private:
      std::vector<int> buffer;
   public:
      void write(int);
      int read();
      void overwrite(int); 

};

}

#endif
