object Login: TLogin
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  ClientHeight = 447
  ClientWidth = 455
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clBlue
  Font.Height = -19
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 23
  object Label1: TLabel
    Left = 80
    Top = 83
    Width = 45
    Height = 23
    Caption = 'Login'
  end
  object Label2: TLabel
    Left = 80
    Top = 147
    Width = 42
    Height = 23
    Caption = 'parol'
  end
  object Label4: TLabel
    Left = -120
    Top = 91
    Width = 45
    Height = 23
    Caption = 'Login'
  end
  object Edit1: TEdit
    Left = 208
    Top = 80
    Width = 121
    Height = 31
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 208
    Top = 144
    Width = 121
    Height = 31
    PasswordChar = '*'
    TabOrder = 1
  end
  object BitBtn1: TBitBtn
    Left = 168
    Top = 248
    Width = 75
    Height = 25
    Kind = bkOK
    NumGlyphs = 2
    TabOrder = 2
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 120
    Top = 200
    Width = 177
    Height = 25
    Caption = 'Ro'#39'yxatdan o'#39'tish'
    Glyph.Data = {
      DE010000424DDE01000000000000760000002800000024000000120000000100
      0400000000006801000000000000000000001000000000000000000000000000
      80000080000000808000800000008000800080800000C0C0C000808080000000
      FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF00388888888877
      F7F787F8888888888333333F00004444400888FFF444448888888888F333FF8F
      000033334D5007FFF4333388888888883338888F0000333345D50FFFF4333333
      338F888F3338F33F000033334D5D0FFFF43333333388788F3338F33F00003333
      45D50FEFE4333333338F878F3338F33F000033334D5D0FFFF43333333388788F
      3338F33F0000333345D50FEFE4333333338F878F3338F33F000033334D5D0FFF
      F43333333388788F3338F33F0000333345D50FEFE4333333338F878F3338F33F
      000033334D5D0EFEF43333333388788F3338F33F0000333345D50FEFE4333333
      338F878F3338F33F000033334D5D0EFEF43333333388788F3338F33F00003333
      4444444444333333338F8F8FFFF8F33F00003333333333333333333333888888
      8888333F00003333330000003333333333333FFFFFF3333F00003333330AAAA0
      333333333333888888F3333F00003333330000003333333333338FFFF8F3333F
      0000}
    NumGlyphs = 2
    TabOrder = 3
    OnClick = BitBtn2Click
  end
end
