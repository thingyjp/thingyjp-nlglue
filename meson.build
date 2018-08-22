project('nlglue', 'c')

deps = [ dependency('glib-2.0'),
         dependency('libnl-genl-3.0'),
         dependency('libnl-route-3.0') ]
src = [ 'nl80211.c', 'rtnetlink.c' ]
lib = shared_library('nlglue', src,
                     dependencies : deps,
                     install : true)
                        
install_headers(['include/nlglue/nl80211.h', 'include/nlglue/rtnetlink.h' ], 
                subdir : 'nlglue')

pkg = import('pkgconfig')
pkg.generate(lib,
			 version : '0.1',
             filebase : 'libnlglue')