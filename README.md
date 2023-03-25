Haphazard implementation of leetcode problems curated under [Grind 75](https://www.techinterviewhandbook.org/grind75)

## Compile and run unit tests

You can compile and run the unit test suites after cloning the repository using any of the following methods

### Using local machine environment (tested for `unix`)

```
mkdir build
cmake -B build -S .
make
ctest
```

### Using containerised environment

```
docker-compose run --rm utest
```