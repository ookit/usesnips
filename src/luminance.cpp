/*
uniform sampler2D texture0;
vec3 result = vec3(texture(texture0, UV).r);
*/

TexImage2D(
  GL_TEXTURE_2D,
  0, GL_RED,
  width, height,
  0, GL_RED,
  GL_UNSIGNED_BYTE,
  data);

