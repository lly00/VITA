    #include <iostream>
    #include <vector>
    #include <string>
    #include "rapidcsv.h"
    #include "pulsar_producer.h"
    #include "kafka_producer.h"
    #include "randomstringgenerator.h"

    using std::string
    int main()
    {
      rapidcsv::Document doc("../alg/output/random_greedy.csv");
      rapidcsv::Document mes("../alg/output/random_size.csv");
      std::vector<string> topics = doc.GetColumn<string>("topic");
      std::vector<int> sizes = mes.GetColumn<int>("size");
      std::vector<string>
      std::cout << "Read " << col.size() << " values." << std::endl;
      
      for(int l: sizes){
         string message =  SRG::RandomStringGenerator:getString(l);

      }
      
      

    }