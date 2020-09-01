cc_library(
  name = 'englishauction',
  visibility = ['//visibility:public'],
  deps = [
    '@haxecpp//:haxecpp',
    '@maglev//:maglev',
    ':libenglishauction_a',
  ],
  strip_include_prefix = 'include/',
  hdrs = [
    'include/englishauction/EnglishAuction.h',
  ],
  linkstatic = 1,
  alwayslink = 1,
  linkopts = ["-pthread"],
)

cc_import(
  name = 'libenglishauction_a',
  static_library = 'libenglishauction.a',
  alwayslink = 1,
)

genrule(
  name = 'make_libenglishauction_a',
  outs = ["libenglishauction.a"],
  cmd = "export HOME=/root && haxelib setup /root/haxelib && (cd $$(dirname $(location Build.xml)); haxelib run hxcpp Build.xml) && mv $$(dirname $(location Build.xml))/liboutput.a $@ && $(location strip.sh) $@",
  tools = glob(["*.xml", "*.txt", "*.h", "src/**", "include/**", "strip.sh"]),
)
