# Mapping_input_strings

> Write a function ```std::map<char, char> CPPLib::Mappable(const std::string& from, const std::string& to)``` in [cpplib.cc](src/lib/cpplib.cc).
> Write a function that takes two strings from and to and determines if they are mappable.

- Two strings are mappable if the characters in from can be replaced to get to.
- You can assume characters are strictly lower cases.  
- Each character can only map to itself.
- The output should be a map:
  - Empty map if the mapping is not possible
  - The actual map if the mapping was possible

Example 1:
Input: from = "add", to = "egg”
Output: {(a->e), (d->g)}

Example 2:
Input: from = "extreme", to = "egg”
Output: { }

Example 3:
Input: from = "harder", to = "waiter”
Output: { }, because you cannot map 'r' to 'i' and 'r' at the same time!

Example 4:
Input: from = "aabbrr", to = "ddeekk”
Output: {(a->d),(b->e), (r->k)}


## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/Mapping_input_strings.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
You can run unit tests using [`blaze`](#installing-bazel):

```bash
bazel test tests:tests
```

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
