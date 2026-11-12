// rea decompile_all
// name: FUN_200f9200
// address: 0x200f9200
// body: available
// range: 0x200f9200-0x200f92c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200f9200(undefined1 *param_1,uint param_2,byte *param_3)

{
  undefined1 uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar2 = param_2;
  iVar6 = 0;
  pbVar5 = param_3;
  if ((int)param_2 < 1) {
    *param_3 = 0;
    return;
  }
  do {
    iVar4 = 0;
    do {
      if (iVar6 < iVar2) {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        *(undefined1 *)((int)&param_3 + iVar4) = uVar1;
      }
      else {
        *(undefined1 *)((int)&param_3 + iVar4) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar4 < 3);
    param_2._0_3_ =
         CONCAT12((param_3._1_1_ & 0xf) * '\x04' + (param_3._2_1_ >> 6),
                  CONCAT11(((byte)param_3 & 3) * '\x10' + (param_3._1_1_ >> 4),(byte)param_3 >> 2));
    param_2 = CONCAT13(param_3._2_1_,(undefined3)param_2) & 0x3fffffff;
    iVar4 = 0;
    do {
      bVar3 = *(byte *)((int)&param_2 + iVar4);
      if (bVar3 < 0x1a) {
        bVar3 = bVar3 + 0x41;
      }
      else if (bVar3 < 0x34) {
        bVar3 = bVar3 + 0x47;
      }
      else if (bVar3 < 0x3e) {
        bVar3 = bVar3 - 4;
      }
      else if (bVar3 == 0x3e) {
        bVar3 = 0x2b;
      }
      else {
        bVar3 = (bVar3 != 0x3f) - 1U & 0x2f;
      }
      *pbVar5 = bVar3;
      pbVar5 = pbVar5 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  } while (iVar6 < iVar2);
  *pbVar5 = 0;
  return;
}

