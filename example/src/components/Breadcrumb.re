let str = React.string;
let routes: array(Antd.Breadcrumb.route) = [|
  {"path": "index", "breadcrumbName": "home"},
  {"path": "first", "breadcrumbName": "first"},
  {"path": "second", "breadcrumbName": "second"},
|];
let itemRender =
    (
      route: Antd.Breadcrumb.route,
      params,
      routes: array(Antd.Breadcrumb.route),
      paths: array(string),
    ) => {
  let isLast =
    routes |> Js.Array.indexOf(route) === StdLabels.Array.length(routes) - 1;
  isLast
    ? <span> {route##breadcrumbName |> str} </span>
    : <span> {String.concat(" / ", paths |> Array.to_list) |> str} </span>;
};
let overlay =
  <Antd.Menu>
    <Antd.Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.alipay.com/">
        {"General" |> str}
      </a>
    </Antd.Menu.Item>
    <Antd.Menu.Item>
      <a
        target="_blank"
        rel="noopener noreferrer"
        href="http://www.taobao.com/">
        {"Layout" |> str}
      </a>
    </Antd.Menu.Item>
    <Antd.Menu.Item>
      <a
        target="_blank" rel="noopener noreferrer" href="http://www.tmall.com/">
        {"Navigation" |> str}
      </a>
    </Antd.Menu.Item>
  </Antd.Menu>;
[@react.component]
let make = () =>
  <Section name="Antd.Breadcrumb">
    <Antd.Breadcrumb>
      <Antd.Breadcrumb.Item> {"Home" |> str} </Antd.Breadcrumb.Item>
      <Antd.Breadcrumb.Item>
        <a href=""> {"Application Center" |> str} </a>
      </Antd.Breadcrumb.Item>
      <Antd.Breadcrumb.Item>
        <a href=""> {"Application List" |> str} </a>
      </Antd.Breadcrumb.Item>
      <Antd.Breadcrumb.Item> {"An Application" |> str} </Antd.Breadcrumb.Item>
    </Antd.Breadcrumb>
    <Antd.Breadcrumb>
      <Antd.Breadcrumb.Item href="">
        <Antd.IconUnsafe _type=Antd.IconName.home />
      </Antd.Breadcrumb.Item>
      <Antd.Breadcrumb.Item href="">
        <Antd.IconUnsafe _type=Antd.IconName.user />
        <span> {"Application List" |> str} </span>
      </Antd.Breadcrumb.Item>
      <Antd.Breadcrumb.Item> {"Application" |> str} </Antd.Breadcrumb.Item>
    </Antd.Breadcrumb>
    <Antd.Breadcrumb itemRender routes />
    <div>
      <Antd.Breadcrumb>
        <Antd.Breadcrumb.Item> {"Ant Design" |> str} </Antd.Breadcrumb.Item>
        <Antd.Breadcrumb.Item>
          <a href=""> {"Component" |> str} </a>
        </Antd.Breadcrumb.Item>
        <Antd.Breadcrumb.Item overlay>
          <a href=""> {"General" |> str} </a>
        </Antd.Breadcrumb.Item>
        <Antd.Breadcrumb.Item> {"Button" |> str} </Antd.Breadcrumb.Item>
      </Antd.Breadcrumb>
    </div>
  </Section>;