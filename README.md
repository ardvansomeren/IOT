# IOT
Raspbian and Arduino projects - Exploring IOT

## Git best practices
Following best practices on how to use GIT - [Git for professionals](https://www.freecodecamp.org/news/git-for-professionals/)

### GitHub Personal Access Token (PAT)
The Personal Access Token (PAT) is used to secure and limit the access to a repository. It is a good practice to minimize the access, or 'principle of least priviledge'.
A good place to start seems to be the explanation in the GitHub community: What are the GitHub scopes needed when creating a Personal Access Token?

...there is a better article outlining the permissions details here: [GitHub PAT scope](https://docs.microsoft.com/en-us/azure/devops/pipelines/repos/github?view=azure-devops&tabs=yaml)

In this case I choose to go for:

- **Repo**
- **Admin**:Repo_hook
- **User**: Read:User and User:Email

### Branche strategy
I am chosing to create two additional branches for this track. **Feature** for every new project or course I start. **Develop** for every time I start changes in my code.

## IOT
Exploring Raspbian and Arduino projects to get a better understanding how IOT is developing and how these developments can be used. Starting with the very basics following and implementing the example projects from Eli - [YouTube Playlist Ardione from Eli the Computer Guy](https://www.youtube.com/playlist?list=PLJcaPjxegjBUsCc8PDvalF9j9dvc1RpUh)

## Azure DevOps
Additionally to exploring GIT best practices and IOT developments, this track is using Azure DevOps to explore the integration of GIT with Azure DevOps and using an Agile project to 'manage' the track.
- Epic: This track
- Feature: Every project or course
- User Story: Description of the MVP steps

### Linking Azure Boards to GitHub commit or pull request.

### Linking from GitHub commit to Azure Board work item
In the [Microsoft documentation](https://docs.microsoft.com/en-us/azure/devops/boards/github/link-to-from-github?view=azure-devops) is explained how to link from a commit to a Azure Board work item by using **AB#{work item id}**

## Azure IOT
As a tech savvy sales consultant working in the hightech discrete manufacturing industry I need to get a deeper understanding of what is developing in the realm of Azure IOT so I can explain the added value of these developments with more confidence to my collegues and customers.
