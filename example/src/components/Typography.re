let str = React.string;
[@react.component]
let make = () =>
  <Section name="Typography">
    //  <div>
    //    <Title> {"Introduction" |> str} </Title>
    //    <Paragraph>
    //      {"In the process of internal desktop applications development, many different design specs and implementations would be involved, which might cause designers and developers difficulties and duplication and reduce the efficiency of development.
    //  "
    //       |> str}
    //    </Paragraph>
    //    <Paragraph>
    //      {"After massive project practice and summaries, Ant Design, a design language for background applications, is refined by Ant UED Team, which aims to"
    //       |> str}
    //      <Antd.Typography.Text strong=true>
    //        {"uniform the user interface specs for internal background projects, lower the unnecessary cost of design differences and implementation and liberate the resources of design and front-end development"
    //         |> str}
    //      </Antd.Typography.Text>
    //    </Paragraph>
    //    <Title level=2> {"Guidelines and Resources" |> str} </Title>
    //    <Paragraph>
    //      {"We supply a series of design principles, practical patterns and high quality design resources"
    //       |> str}
    //      <Antd.Typography.Text code=true> {"Sketch" |> str} </Antd.Typography.Text>
    //      {"and" |> str}
    //      <Antd.Typography.Text code=true> {"Axure" |> str} </Antd.Typography.Text>
    //      {", to help people create their product prototypes beautifully and efficiently."
    //       |> str}
    //    </Paragraph>
    //    <Paragraph>
    //      <ul>
    //        <li> <a href="/docs/spec/proximity"> {"Principles" |> str} </a> </li>
    //        <li>
    //          <a href="/docs/pattern/navigation"> {"Patterns" |> str} </a>
    //        </li>
    //        <li>
    //          <a href="/docs/resource/download">
    //            {"Resource Download" |> str}
    //          </a>
    //        </li>
    //      </ul>
    //    </Paragraph>
    //    <Paragraph ellipsis={Obj(Paragraph.ellipsisObj(~rows=2, ()))}>
    //      {Belt.Array.makeBy(500, _ => "Ant Design ellipsis")
    //       |> Js.Array.joinWith(" ")
    //       |> str}
    //    </Paragraph>
    //  </div>

      <div>
        <Antd.Typography.Text> {"Ant Design" |> str} </Antd.Typography.Text>
        <br />
        // TODO: BREAKING
        // <Antd.Typography.Text copyable=true>
        //   {"Copyable TRUE" |> str}
        // </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text _type=`secondary>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text _type=`warning>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text _type=`danger>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text disabled=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text mark=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text code=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text underline=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text delete=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
        <br />
        <Antd.Typography.Text strong=true>
          {"Ant Design" |> str}
        </Antd.Typography.Text>
      </div>
    </Section>;