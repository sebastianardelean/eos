d:\Tools\lint\lint-nt -A(C99) -v std.lnt env-xml.lnt eos.c -width(0) +xml(?xml version="1.0" ?) +xml(doc) -"format=<message><file>%f</file> <line>%l</line> <type>%t</type> <code>%n</code> <desc>%m</desc></message>" -"format_specific= " -hFs1 -pragma(message) >_LINT.TMP

