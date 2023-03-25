# This script will generate template files required to implement
# solutions under this repo

from argparse import ArgumentParser

def generate(grind: int, solution: int) -> None:
    raise NotImplementedError("To be implemented")

def parse_args() -> ArgumentParser:
    parser = ArgumentParser(prog='gen-template')
    parser.add_argument("-g", "--grind", type=int)
    parser.add_argument("-s", "--solution", type=int, default=1)
    return parser.parse_args().__dict__

if __name__ == '__main__':
    args = parse_args()
    generate(**args)