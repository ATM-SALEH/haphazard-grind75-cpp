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

## Generate template for an implementation

A python script is available to generate boilerplate components for a solution. It can be invoked using any of the following methods

### Using local machine environment (tested for `unix`)

```
python3 scripts/gen_template -g <grind_hash> -s <solution_hash>
(e.g. python3 scripts/gen_template -g 3 -s 1)
```

### Using containerised environment

```
GRIND=<grind_hash> SOLUTON=<solution_hash> docker-compose run --rm gen-template
(e.g. GRIND=3 SOLUTON=1 docker-compose run --rm gen-template)
```