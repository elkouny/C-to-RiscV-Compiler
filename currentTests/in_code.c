int x[3]={1, 2, 4};

int zoo(){
  return x[2];
}

int goo(){
  return ( zoo() + zoo() - zoo() * zoo() / zoo() % zoo() && zoo())|| zoo() | (zoo() & zoo()) ^ (zoo() == zoo() != zoo() < zoo() > zoo() <= zoo() >= zoo() << zoo() >> zoo());
}

int f(){
  return goo();
}
