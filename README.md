# libmsi.so

GNOME's `libmsi.so` source code from [msitools](https://gitlab.gnome.org/GNOME/msitools) repository.

## How to compile

I don't know could it be even compiled or not.

    gcc -c -fPIC libmsi/*.c `pkg-config --cflags glib-2.0` `pkg-config --libs glib-2.0` -I`pwd`/include `pkg-config --cflags libgsf-1`

    gcc *.o -shared -o msilib.so
