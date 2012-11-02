# phpWowExtension

`phpWowExtension` is a tool for building your PHP extension based on `Phalcon PHP kernel framework`.

[Phalcon PHP](https://github.com/phalcon/cphalcon) is a web framework delivered as a C extension providing high
performance and lower resource consumption, released under New BSD License.

`phpWowExtension` only extract `kernel` of `Phalcon PHP kernel framework`.

## Requirements

* PHP 5.x environment
* GCC compiler

### Linux/Unix/Mac

Ubuntu:

```
sudo apt-get install build-essential php5-dev
```

## Usage

### 1. First run

```
make update_upstream
```

This step will checkout `Phalcon PHP` repository.

### 2. Create skeleton extension

```
make ext_skel extname=EXTENSION_NAME
```

"EXTENSION_NAME" is your PHP extension name, such as,

```
make ext_skel extname=demo
```

This will create a extension named "demo".


### 3. Program your extension

Hacked yourself in "ext/EXTENSION_NAME".

### 4. Compile extension

```
$ export CFLAGS="-O2 -fno-delete-null-pointer-checks"
$ cd ext/EXTENSION_NAME
$ phpize
$ ./configure --enable-EXTENSION_NAME
$ make
$ (sudo) make install
```

Add extension to your php.ini

```
extension=EXTENSION_NAME.so
```

Or, if you use [phpbrew](https://github.com/c9s/phpbrew),

```
phpbrew enable EXTENSION_NAME
```

### *. Update Phalcon PHP kernel framework

```
make update_upstream
```

This step will update to the latest `Phalcon PHP` repository.

## License

the MIT License.

Based on [Phalcon PHP](https://github.com/phalcon/cphalcon), the New BSD License.

