open! Antd;

let str = React.string;

let options1: array(Antd.Cascader.fieldNames) = [|
  {
    "value": "zhejiang",
    "label": "Zhejiang",
    "children":
      Some([|
        {
          "value": "hangzhou",
          "label": "Hangzhou",
          "children":
            Some([|
              {"value": "xihu", "label": "West Lake", "children": None},
            |]),
        },
      |]),
  },
  {
    "value": "jiangsu",
    "label": "Jiangsu",
    "children":
      Some([|
        {
          "value": "nanjing",
          "label": "Nanjing",
          "children":
            Some([|
              {
                "value": "zhonghuamen",
                "label": "Zhong Hua Men",
                "children": None,
              },
            |]),
        },
      |]),
  },
|];

[@react.component]
let make = () =>
  <Section name="Cascader">
    <Cascader options=options1 placeholder="Please select" />
  </Section>;