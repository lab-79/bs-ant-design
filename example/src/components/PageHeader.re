open Antd;

let str = React.string;

let routes = [|
  {"path": "index", "breadcrumbName": "First-level Menu"},
  {"path": "first", "breadcrumbName": "Second-level Menu"},
  {"path": "second", "breadcrumbName": "Third-level Menu"},
|];

module Paragraph = Antd.Typography.Paragraph;

let routes2 = [|
  {"path": "index", "breadcrumbName": "First-level Menu"},
  {"path": "first", "breadcrumbName": "Second-level Menu"},
  {"path": "second", "breadcrumbName": "Third-level Menu"},
|];

let content =
  <div className="content">
    <Paragraph>
      {"Ant Design interprets the color system into two levels: a system-level
      color system and a product-level color system."
       |> str}
    </Paragraph>
    <Paragraph>
      {" Ant Design's design team preferred to design with the HSB color model,
      which makes it easier for designers to have a clear psychological
      expectation of color when adjusting colors, as well as facilitate
      communication in teams."
       |> str}
    </Paragraph>
    <p className="contentLink">
      <a>
        <img
          src="https://gw.alipayobjects.com/zos/rmsportal/MjEImQtenlyueSmVEfUD.svg"
          alt="start"
        />
        {"Quick Start" |> str}
      </a>
      <a>
        <img
          src="https://gw.alipayobjects.com/zos/rmsportal/NbuDUAuBlIApFuDvWiND.svg"
          alt="info"
        />
        {"Product Info" |> str}
      </a>
      <a>
        <img
          src="https://gw.alipayobjects.com/zos/rmsportal/ohOEPSYdDTNnyMbGuyLb.svg"
          alt="doc"
        />
        {"Product Doc" |> str}
      </a>
    </p>
  </div>;

let extraContent =
  <img
    src="https://gw.alipayobjects.com/mdn/mpaas_user/afts/img/A*KsfVQbuLRlYAAAAAAAAAAABjAQAAAQ/original"
    alt="content"
  />;

module Styles = {
  open Css;

  let wrap = style([display(`flex)]);
  let content = style([flex(1)]);
};

[@react.component]
let make = () =>
  <Section name="Page Header">
    <PageHeader
      onBack={() => ()}
      title={"Title" |> str}
      subTitle={"This is a subtitle" |> str}
    />
    <PageHeader title={"Title" |> str} breadcrumb=routes />
    <PageHeader title={"Title" |> str} breadcrumb=routes2>
      <div className=Styles.wrap>
        <div className=Styles.content> content </div>
        <div className="extraContent"> extraContent </div>
      </div>
    </PageHeader>
  </Section>;