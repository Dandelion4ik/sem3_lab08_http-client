// Copyright 2020 Your Name <your_email>

#include <client.hpp>

int main(int argc, char* argv[]) {
  client client(argc, argv);
  return client.run();
}
//./cmake-build-debug/tests  http://localhost:8080/v1/api/suggest
//{\"input\":\"hel\"}
