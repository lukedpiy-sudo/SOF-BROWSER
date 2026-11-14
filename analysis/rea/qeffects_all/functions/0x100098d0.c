// rea decompile_all
// name: FUN_100098d0
// address: 0x100098d0
// body: available
// range: 0x100098d0-0x10009fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB opengl32.pdb (GUID f4e395d1-986f-4455-b223-6246e00b4e14, age (hex) 3, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100098d0(void)

{
  int iVar1;
  HDC hDC;
  HWND hWnd;
  undefined4 uVar2;
  int unaff_EBX;
  char *pcVar3;
  undefined4 local_30;
  char local_29;
  void *local_28;
  tagRECT local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1001c7f9;
  local_10 = ExceptionList;
  local_14 = DAT_10027040 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  (*DAT_10029638)(0xba2,unaff_EBX + 0x4c,local_14);
  pcVar3 = "InitializeGL\n";
  *(undefined4 *)(unaff_EBX + 0x1c) = 0xffaa;
  (*(code *)PTR_FUN_10028344)();
  FUN_10001bf0(pcVar3);
  hDC = (HDC)(*DAT_100299fc)();
  hWnd = WindowFromDC(hDC);
  GetClientRect(hWnd,&local_24);
  *(LONG *)(unaff_EBX + 0x20) = local_24.right - local_24.left;
  *(LONG *)(unaff_EBX + 0x24) = local_24.bottom - local_24.top;
  FUN_100096a0();
  if (*(char *)(unaff_EBX + 0x6c) != '\0') {
    local_28 = operator_new(0x30);
    local_8 = 0;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform vec4 Local0;\nuniform sampler2DRect Texture0;\nvoid main(void)\n{\nvec3 col = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\ngl_FragColor.rgb = pow( col, Local0.xxx );\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0xe8) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 1;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col2 = texture2DRect(Texture0, gl_TexCoord[1].xy).rgb;\nvec3 col3 = texture2DRect(Texture0, gl_TexCoord[2].xy).rgb;\nvec3 col4 = texture2DRect(Texture0, gl_TexCoord[3].xy).rgb;\ngl_FragColor.rgb = (col1 + col2 + col3 + col4) / 4.0;\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "uniform vec4 Local0;\nvoid main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0 + Local0;\ngl_TexCoord[1] = gl_MultiTexCoord0 + Local0 * 2.0;\ngl_TexCoord[2] = gl_MultiTexCoord0 - Local0;\ngl_TexCoord[3] = gl_MultiTexCoord0 - Local0 * 2.0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0xec) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 2;
    if (local_28 == (void *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform vec4 Local0;\nuniform sampler2DRect Texture0;\nuniform sampler2DRect Texture1;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col2 = texture2DRect(Texture1, gl_TexCoord[1].xy).rgb;\ngl_FragColor.rgb = col1 + col2 * Local0.x;\ngl_FragColor.a\t= 1.0;\n}\n"
                                    ,
                                    "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_TexCoord[1] = gl_MultiTexCoord0 * 0.5;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                                   );
    }
    local_8 = 0xffffffff;
    *(char **)(unaff_EBX + 0xf0) = pcVar3;
    if ((*(char **)(unaff_EBX + 0xe8) == (char *)0x0) || (**(char **)(unaff_EBX + 0xe8) == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6c) = 0;
    }
    if ((*(char **)(unaff_EBX + 0xec) == (char *)0x0) || (**(char **)(unaff_EBX + 0xec) == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6c) = 0;
    }
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6c) = 0;
    }
  }
  if (*(char *)(unaff_EBX + 0x6d) != '\0') {
    local_28 = operator_new(0x30);
    local_8 = 3;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform vec4 Local0;\nuniform vec4 Local1;\nuniform sampler2DRect Texture0;\nfloat read_depth( vec2 coord )\n{\nreturn Local0.x / (Local0.y + Local0.x - texture2DRect( Texture0, coord ).r * Local0.y);\n}\nvec2 rand( vec2 coord )\n{\nfloat coordDot = dot( coord, vec2( 12.9898, 78.233 ) );\nfloat noiseX = fract( sin( coordDot ) * 43758.5453 );\nfloat noiseY = fract( sin( coordDot * 2.0 ) * 43758.5453 );\nreturn vec2( noiseX, noiseY ) * 0.004;\n}\nfloat compare_depth( float depth1, float depth2 )\n{\nfloat aoRange = 60.0;\nfloat depthDiff = depth1 - depth2;\nfloat propagation = depthDiff * (Local0.y - Local0.x);\nfloat rangeDiff = sqrt(clamp( 1.0 - propagation / aoRange, 0.0, 1.0 ));\nfloat ao = Local1.z * depthDiff * (2.0 - depthDiff) * rangeDiff;\nreturn ao;\n}\nvoid main(void)\n{\nfloat depth = read_depth( gl_TexCoord[0].xy );\nfloat ao;\nif ( depth > Local1.x && depth < Local1.y ) {\nvec2 noise = rand( gl_TexCoord[0].zw );\nfloat distScale = 1.0 + 5.0 * sqrt( 1.0 - depth );\nfloat w = distScale + (noise.x*(1.0-noise.x)) * Local0.z;\nfloat h = distScale + (noise.y*(1.0-noise.y)) * Local0.w;\nvec2 ofs;\nfloat d;\nint samples = 3;\nint rings = 3;\nfloat TWO_PI = 2.0 * 3.14159265;\nfor ( int i = 1 ; i <= rings; i++ ) {\nfloat angleStep = TWO_PI / float( samples * i );\nfor ( int j = 1 ; j <= samples*i; j++ ) {\nofs.x = cos( float(j) * angleStep ) * float(i) * w;\nofs.y = sin( float(j) * angleStep ) * float(i) * h;\nd = read_depth( gl_TexCoord[0].xy + ofs );\n// ignore occluder with too low depth value (possible viewmodel)\nif ( d < Local1.x ) continue;\nao += compare_depth( depth, d );\n}\n}\nao = 1.0 - ao;\n} else {\nao = 1.0;\n}\ngl_FragColor.rgb = vec3( ao );\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "uniform vec4 Local0;\nvoid main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0.xyxy * vec4( 1.0, 1.0, 1.0 / Local0.z, 1.0 / Local0.w );\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0xf4) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 4;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col2 = texture2DRect(Texture0, gl_TexCoord[1].xy).rgb;\nvec3 col3 = texture2DRect(Texture0, gl_TexCoord[2].xy).rgb;\nvec3 col4 = texture2DRect(Texture0, gl_TexCoord[3].xy).rgb;\ngl_FragColor.rgb = (col1 + col2 + col3 + col4) / 4.0;\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "uniform vec4 Local0;\nvoid main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0 + Local0;\ngl_TexCoord[1] = gl_MultiTexCoord0 + Local0 * 2.0;\ngl_TexCoord[2] = gl_MultiTexCoord0 - Local0;\ngl_TexCoord[3] = gl_MultiTexCoord0 - Local0 * 2.0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0xf8) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 5;
    if (local_28 == (void *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nuniform sampler2DRect Texture1;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col2 = texture2DRect(Texture1, gl_TexCoord[1].xy).rgb;\nfloat luminance = dot( col1, vec3( 0.6, 0.2, 0.2 ) );\ngl_FragColor.rgb = mix( col1 * col2, col1, luminance * luminance );\ngl_FragColor.a\t= 1.0;\n}\n"
                                    ,
                                    "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_TexCoord[1] = gl_MultiTexCoord0 * 0.5;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                                   );
    }
    local_8 = 0xffffffff;
    *(char **)(unaff_EBX + 0xfc) = pcVar3;
    if ((*(char **)(unaff_EBX + 0xf4) == (char *)0x0) || (**(char **)(unaff_EBX + 0xf4) == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6d) = 0;
    }
    if ((*(char **)(unaff_EBX + 0xf8) == (char *)0x0) || (**(char **)(unaff_EBX + 0xf8) == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6d) = 0;
    }
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6d) = 0;
    }
  }
  if (*(char *)(unaff_EBX + 0x6e) != '\0') {
    local_28 = operator_new(0x30);
    local_8 = 6;
    if (local_28 == (void *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nuniform vec4 Local0;\nvec3 rgb_to_hsl( const vec3 color )\n{\nvec3 hsl;\nfloat fmin = min(min(color.r, color.g), color.b);\nfloat fmax = max(max(color.r, color.g), color.b);\nfloat delta = fmax - fmin;\nhsl.z = (fmax + fmin) / 2.0;\nif (delta == 0.0) {\nhsl.x = 0.0;\nhsl.y = 0.0;\n} else {\nif (hsl.z < 0.5) hsl.y = delta / (fmax + fmin);\nelse hsl.y = delta / (2.0 - fmax - fmin);\nfloat deltaR = (((fmax - color.r) / 6.0) + (delta / 2.0)) / delta;\nfloat deltaG = (((fmax - color.g) / 6.0) + (delta / 2.0)) / delta;\nfloat deltaB = (((fmax - color.b) / 6.0) + (delta / 2.0)) / delta;\nif (color.r == fmax ) hsl.x = deltaB - deltaG;\nelse if (color.g == fmax) hsl.x = (1.0 / 3.0) + deltaR - deltaB;\nelse if (color.b == fmax) hsl.x = (2.0 / 3.0) + deltaG - deltaR;\nif (hsl.x < 0.0) hsl.x += 1.0;\nelse if (hsl.x > 1.0) hsl.x -= 1.0;\n}\nreturn hsl;\n}\nfloat hue_to_rgb( float f1, float f2, float hue )\n{\nif (hue < 0.0) hue += 1.0;\nelse if (hue > 1.0) hue -= 1.0;\nfloat res;\nif ((6.0 * hue) < 1.0) res = f1 + (f2 - f1) * 6.0 * hue;\nelse if ((2.0 * hue) < 1.0) res = f2;\nelse if ((3.0 * hue) < 2.0) res = f1 + (f2 - f1) * ((2.0 / 3.0) - hue) * 6.0;\nelse res = f1;\nreturn res;\n}\nvec3 hsl_to_rgb( vec3 hsl )\n{\nvec3 rgb;\nif (hsl.y == 0.0) rgb = vec3(hsl.z);\nelse {\nfloat f2;\nif (hsl.z < 0.5) f2 = hsl.z * (1.0 + hsl.y);\nelse f2 = (hsl.z + hsl.y) - (hsl.y * hsl.z);\nfloat f1 = 2.0 * hsl.z - f2;\nrgb.r = hue_to_rgb(f1, f2, hsl.x + (1.0/3.0));\nrgb.g = hue_to_rgb(f1, f2, hsl.x);\nrgb.b= hue_to_rgb(f1, f2, hsl.x - (1.0/3.0));\n}\nreturn rgb;\n}\nvoid main(void)\n{\nvec3 col = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 hsl = rgb_to_hsl( col ) + Local0.xyz;\ngl_FragColor.rgb = hsl_to_rgb( hsl );\ngl_FragColor.a\t= 1.0;\n}\n"
                                    ,
                                    "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                                   );
    }
    local_8 = 0xffffffff;
    *(char **)(unaff_EBX + 0x100) = pcVar3;
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6e) = 0;
    }
  }
  if (*(char *)(unaff_EBX + 0x6f) != '\0') {
    local_28 = operator_new(0x30);
    local_8 = 7;
    if (local_28 == (void *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nuniform vec4 Local0;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy - vec2( 1.0, 1.0 )).rgb;\nvec3 col2 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col3 = texture2DRect(Texture0, gl_TexCoord[0].xy + vec2( 1.0, 1.0 )).rgb;\nvec3 colEmboss = col1 * 2.0 - col2 - col3;\nfloat colDot = max( 0.0, dot( colEmboss, vec3( 0.333, 0.333, 0.333 ) ) ) * Local0.x;\nvec3 colFinal = col2 - vec3( colDot ) ;\nfloat luminance = dot( col2, vec3( 0.6, 0.2, 0.2 ) );\ngl_FragColor.rgb = mix( colFinal, col2, luminance * luminance );\ngl_FragColor.a\t= 1.0;\n}\n"
                                    ,
                                    "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                                   );
    }
    local_8 = 0xffffffff;
    *(char **)(unaff_EBX + 0x104) = pcVar3;
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x6f) = 0;
    }
  }
  if (*(char *)(unaff_EBX + 0x70) != '\0') {
    local_28 = operator_new(0x30);
    local_8 = 8;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform sampler2DRect Texture0;\nvoid main(void)\n{\nvec3 col1 = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 col2 = texture2DRect(Texture0, gl_TexCoord[1].xy).rgb;\nvec3 col3 = texture2DRect(Texture0, gl_TexCoord[2].xy).rgb;\nvec3 col4 = texture2DRect(Texture0, gl_TexCoord[3].xy).rgb;\ngl_FragColor.rgb = (col1 + col2 + col3 + col4) / 4.0;\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "uniform vec4 Local0;\nvoid main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0 + Local0;\ngl_TexCoord[1] = gl_MultiTexCoord0 + Local0 * 2.0;\ngl_TexCoord[2] = gl_MultiTexCoord0 - Local0;\ngl_TexCoord[3] = gl_MultiTexCoord0 - Local0 * 2.0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0x108) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 9;
    if (local_28 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform vec4 Local0;\nuniform sampler2DRect Texture0;\nfloat read_depth( vec2 coord )\n{\nreturn Local0.x / (Local0.y + Local0.x - texture2DRect( Texture0, coord ).r * Local0.y);\n}\nvoid main(void)\n{\ngl_FragColor.rgb = vec3( read_depth( gl_TexCoord[0].xy ) );\ngl_FragColor.a\t= 1.0;\n}\n"
                           ,
                           "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0;\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                          );
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(unaff_EBX + 0x10c) = uVar2;
    local_28 = operator_new(0x30);
    local_8 = 10;
    if (local_28 == (void *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)FUN_1000b8a0("#extension GL_ARB_texture_rectangle : enable\nuniform vec4 Local0;\nuniform sampler2DRect Texture0;\nuniform sampler2DRect Texture1;\nuniform sampler2DRect Texture2;\nvoid main(void)\n{\nfloat ratio;\nvec3 colNormal = texture2DRect(Texture0, gl_TexCoord[0].xy).rgb;\nvec3 colBlur = texture2DRect(Texture1, gl_TexCoord[0].zw).rgb;\nfloat depth = texture2DRect(Texture2, gl_TexCoord[0].zw).r;\nif ( depth < Local0.x || depth == 1.0 ) ratio = 0.0;\nelse ratio = clamp( abs(depth - Local0.y) * Local0.z, 0.0, 1.0 );\ngl_FragColor.rgb = mix( colNormal, colBlur, ratio * pow( depth, 0.25 ) );\ngl_FragColor.a\t= 1.0;\n}\n"
                                    ,
                                    "void main(void)\n{\ngl_TexCoord[0] = gl_MultiTexCoord0.xyxy * vec4( 1.0, 1.0, 0.5, 0.5 );\ngl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\n}\n"
                                   );
    }
    local_8 = 0xffffffff;
    *(char **)(unaff_EBX + 0x110) = pcVar3;
    if ((*(char **)(unaff_EBX + 0x108) == (char *)0x0) || (**(char **)(unaff_EBX + 0x108) == '\0'))
    {
      *(undefined1 *)(unaff_EBX + 0x70) = 0;
    }
    if ((*(char **)(unaff_EBX + 0x10c) == (char *)0x0) || (**(char **)(unaff_EBX + 0x10c) == '\0'))
    {
      *(undefined1 *)(unaff_EBX + 0x70) = 0;
    }
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      *(undefined1 *)(unaff_EBX + 0x70) = 0;
    }
  }
  if ((DAT_10029494 & 8) != 0) {
    local_29 = (*DAT_100296d4)(0x84f5);
    (*DAT_10029638)(0x84f6,&local_30);
    (*DAT_100295b8)(0x84f5);
    if (((*(char *)(unaff_EBX + 0x6c) != '\0') || (*(char *)(unaff_EBX + 0x6d) != '\0')) ||
       (*(char *)(unaff_EBX + 0x70) != '\0')) {
      iVar1 = *(int *)(unaff_EBX + 0x1c);
      *(int *)(unaff_EBX + 0x1c) = iVar1 + 1;
      *(int *)(unaff_EBX + 0xe0) = iVar1;
      (*DAT_100294ac)(0x84f5,iVar1);
      (*DAT_10029958)(0x84f5,0x2802,DAT_10029488);
      (*DAT_10029958)(0x84f5,0x2803,DAT_10029488);
      (*DAT_10029958)(0x84f5,0x2800,0x2601);
      (*DAT_10029958)(0x84f5,0x2801,0x2601);
      (*DAT_1002994c)(0x84f5,0,3,*(int *)(unaff_EBX + 0x54) >> 1,*(int *)(unaff_EBX + 0x58) >> 1,0,
                      0x1907,0x1401,0);
      if (*(char *)(unaff_EBX + 0x70) != '\0') {
        iVar1 = *(int *)(unaff_EBX + 0x1c);
        *(int *)(unaff_EBX + 0x1c) = iVar1 + 1;
        *(int *)(unaff_EBX + 0xe4) = iVar1;
        (*DAT_100294ac)(0x84f5,iVar1);
        (*DAT_10029958)(0x84f5,0x2802,DAT_10029488);
        (*DAT_10029958)(0x84f5,0x2803,DAT_10029488);
        (*DAT_10029958)(0x84f5,0x2800,0x2601);
        (*DAT_10029958)(0x84f5,0x2801,0x2601);
        (*DAT_1002994c)(0x84f5,0,3,*(int *)(unaff_EBX + 0x54) >> 1,*(int *)(unaff_EBX + 0x58) >> 1,0
                        ,0x1907,0x1401,0);
      }
    }
    iVar1 = *(int *)(unaff_EBX + 0x1c);
    *(int *)(unaff_EBX + 0x1c) = iVar1 + 1;
    *(int *)(unaff_EBX + 0xd8) = iVar1;
    (*DAT_100294ac)(0x84f5,iVar1);
    (*DAT_10029958)(0x84f5,0x2802,DAT_10029488);
    (*DAT_10029958)(0x84f5,0x2803,DAT_10029488);
    (*DAT_10029958)(0x84f5,0x2800,0x2600);
    (*DAT_10029958)(0x84f5,0x2801,0x2600);
    (*DAT_1002994c)(0x84f5,0,3,*(undefined4 *)(unaff_EBX + 0x54),*(undefined4 *)(unaff_EBX + 0x58),0
                    ,0x1907,0x1401,0);
    if ((*(char *)(unaff_EBX + 0x6d) != '\0') || (*(char *)(unaff_EBX + 0x70) != '\0')) {
      iVar1 = *(int *)(unaff_EBX + 0x1c);
      *(int *)(unaff_EBX + 0x1c) = iVar1 + 1;
      *(int *)(unaff_EBX + 0xdc) = iVar1;
      (*DAT_100294ac)(0x84f5,iVar1);
      (*DAT_10029958)(0x84f5,0x884b,0x1909);
      (*DAT_10029958)(0x84f5,0x2802,DAT_10029488);
      (*DAT_10029958)(0x84f5,0x2803,DAT_10029488);
      (*DAT_10029958)(0x84f5,0x2800,0x2600);
      (*DAT_10029958)(0x84f5,0x2801,0x2600);
      (*DAT_1002994c)(0x84f5,0,0x81a6,*(undefined4 *)(unaff_EBX + 0x54),
                      *(undefined4 *)(unaff_EBX + 0x58),0,0x1902,0x1401,0);
    }
    (*DAT_100294ac)(0x84f5,local_30);
    if (local_29 == '\0') {
      (*DAT_10029594)(0x84f5);
    }
  }
  if (*(int *)(unaff_EBX + 0xd8) == 0) {
    *(undefined1 *)(unaff_EBX + 0x70) = 0;
    *(undefined4 *)(unaff_EBX + 0x6c) = 0;
  }
  if (*(int *)(unaff_EBX + 0xe0) == 0) {
    *(undefined2 *)(unaff_EBX + 0x6c) = 0;
    *(undefined1 *)(unaff_EBX + 0x70) = 0;
  }
  if (*(int *)(unaff_EBX + 0xdc) == 0) {
    *(undefined1 *)(unaff_EBX + 0x6d) = 0;
    *(undefined1 *)(unaff_EBX + 0x70) = 0;
  }
  if (*(int *)(unaff_EBX + 0xe4) == 0) {
    *(undefined1 *)(unaff_EBX + 0x70) = 0;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

