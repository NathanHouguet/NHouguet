#ifndef CARRE_H
#define CARRE_H

#include <string>
#include <vector>

class Carre : public Figure {
public:
  Carre(const int width, const int height);
  ~Carre();

  void save(std::string filename);

private:
  void clearImage();
  void createTestImage();

private:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* CARRE_H */