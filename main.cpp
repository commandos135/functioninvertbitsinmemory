#include <iostream>
void invertBits(unsigned char* data, size_t size, unsigned char mask) {
  for (size_t i = 0; i < size; ++i) {
    data[i] ^= mask; 
  }
}
int main() {
  unsigned char data[] = {0b10101100, 0b11110000, 0b01001011}; 
  size_t size = sizeof(data); 
  unsigned char mask = 0b00111000;
  invertBits(data, size, mask); 
  for (size_t i = 0; i < size; ++i) {
    std::cout << std::bitset(data[i]) << " ";
  }
  return 0;
}
